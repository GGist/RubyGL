require 'test/unit'
require 'rubygl/util'

class TestUtil < Test::Unit::TestCase
    
    def test_overflow_wrap
        data = [1, 2, 3, 4, 5]
        
        normal_entry = RubyGL::Util.overflow_wrap(data, 1)
        assert_equal(2, normal_entry)
        
        underflow_entry = RubyGL::Util.overflow_wrap(data, -1)
        assert_equal(5, underflow_entry)
        
        overflow_entry = RubyGL::Util.overflow_wrap(data, 5)
        assert_equal(1, overflow_entry)
    end
    
end