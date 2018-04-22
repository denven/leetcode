def reverse(self, x):
        sign = (x > 0) - (x < 0)
        ret = int(str(x*sign)[::-1])   
        return sign*ret if (ret < 2**31) else 0