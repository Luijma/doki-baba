import unittest
Visible = __import__(visible).Visible

class Test_Visible(unittest.TestCase)
#Testing pipeline

  def test_visible_constructor(self)
    dummy = Visible('graphics/animation/chao-sprites/Idle/tile045.png', 250, 125, 'Doki', 3)
    self.assertEqual(dummy.x, 250)
    print("Ran first test")
    
if __name__ == '__main__':
    unittest.main()    
