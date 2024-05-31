                  if ((*shotit)->tech0!=1)
                  {
                    (*shotit)->root->ext=(*hitit)->tech2;
                    (*shotit)->root->health-=(*hitit)->counter;
                  }
                  
                  if ((*hitit)->tech0!=1)
                  {
                   (*hitit)->root->ext=(*shotit)->tech2;
                   (*hitit)->root->health-=(*shotit)->counter;
                  }

