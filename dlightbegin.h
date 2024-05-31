o->lightit=o->lights.begin();


if (o->lights.begin()!=o->lights.end())
{
glColor4f(((o->lights.front()).r)*((o->lights.front()).a), ((o->lights.front()).a)*((o->lights.front()).g), ((o->lights.front()).a)*((o->lights.front()).b), 1);
}	
if (o->lightit==o->lights.end())
{
   glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
}	
