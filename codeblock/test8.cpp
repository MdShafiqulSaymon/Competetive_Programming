for(int i=0;i<=100;++i)
      {
          for(int j=0;j<n;++j)
          {
              if(i==a[j])
                ++p;
          }
          if(p>=2&&q==0)
          {
              ++x;
              ++y;
          }
          else if(p>=1)
          {
              ++x;
              q=1;
          }
          else
            break;
        p=0;
      }
