
        error = angle_z - (distance_mid / self.distance_constant)#*(linear_x/ # self.direction_target -
        gain = self.get_parameter("gain").value
        kp = gain[0]
        ki = gain[1]
        kd = gain[2]

        network = NLayerNet(input_size=4, hidden_size1=15, hidden_size2=15, output_size=3)
        
        with open("/home/hayaclee/nn.pkl", "rb") as f:
            params = pickle.load(f)
               
            # network.params = {}
        network.params['W1'] = params['W1']
        network.params['b1'] = params['b1']
        network.params['W2'] = params['W2']
        network.params['b2'] = params['b2']
        network.params['W3'] = params['W3']
        network.params['b3'] = params['b3']

        # 계층 생성
        # network.layers = OrderedDict()
        network.layers['Affine1'] = Affine(self.params['W1'], self.params['b1'])
        network.layers['Relu1'] = Relu()
        network.layers['Affine2'] = Affine(self.params['W2'], self.params['b2'])
        network.layers['Relu2'] = Relu()
        network.layers['Affine3'] = Affine(self.params['W3'], self.params['b3'])

        network.lastLayer = SoftmaxWithLoss()

        current = [distance_mid, angle_z]
        goal = [0, 0]
        input = current + goal
        input = np.array([input])
        pred = network.predict(input)
        output = softmax(pred)
        idx = np.argmax(output)
        if idx == 0:
            direction = 0.2
        elif idx == 1:
            direction = 0.0

        new_msg = Float32()
        new_msg.data = kp*error + ki*(self.prev_error + error*self.dt) + kd*(error/self.dt)
        new_msg.data = direction 
        # new_msg.data = angle_z
        self.write("sink_al_theta", new_msg)