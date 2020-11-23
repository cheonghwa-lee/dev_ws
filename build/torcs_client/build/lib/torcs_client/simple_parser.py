class SimpleParser:
    @classmethod
    def parse(cls, sensors, tag, size=None):
        first = sensors.find('(', 0)
        while first > -1:
            last = sensors.find(')', first)
            if last > -1:
                curr = sensors[first+1:last]
                if tag in curr:
                    if size is None:
                        result = curr.split(' ')[1]
                        result = float(result) if '.' in result else int(result)
                        print(tag + ": {}".format(result))
                        return result
                    else:
                        value = [None] * size
                        curr_split = curr.split(' ')
                        for i in range(0, size):
                            value[i] = curr_split[i]
                            if value[i] is None:
                                return None
                        result = []
                        for cur in curr_split[1:]:
                            result.append(float(cur) if '.' in cur else int(cur))
                        print(tag + ": {}".format(result))
                        return result
            else:
                return None
            first = sensors.find('(', last+1)
        return None
    
    @classmethod
    def stringify(cls, tag, value, size=None):
        if size is None:
            return "(" + tag + " " + str(value) + ")"

        _str = "(" + tag
        for i in range(0, size):
            _str = _str + " " + str(value[i])
        _str = _str + ")"

        return _str