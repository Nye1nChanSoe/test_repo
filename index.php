<?php

class Foo 
{
  public static function greet()
  {
    echo static::introduce();
  }
  
  protected static function introduce()
  {
    echo 'My name is foo. Nice to meet you!';
  }
}

class Bar extends Foo 
{
  protected static function introduce()
  {
    echo 'My name is bar. Nice to meet you!';
  }
}

Bar::greet();

