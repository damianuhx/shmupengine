o->colorit=o->colors.begin();

if (o->colorit==o->colors.end())
{
   glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}	

if (o->colors.begin()!=o->colors.end())
{
glColor4f(((o->colors.front()).r)*((o->colors.front()).a), ((o->colors.front()).a)*((o->colors.front()).g), ((o->colors.front()).a)*((o->colors.front()).b), (o->colors.front()).a);
}	

