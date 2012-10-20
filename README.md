Transition Controller
=======================

Set this as your root view controller to allow easy transitioning between core view controllers.

To use simply initalise with -

```objective-c
    _mainController = [[SMTransitionController alloc] initWithViewController:_presentedController];

    [self.window setRootViewController:_mainController];
    [self.window makeKeyAndVisible];
```

To switch out use -

```objective-c
    [_mainController transitionToViewController:_hiddenController withOptions:UIViewAnimationOptionTransitionNone];
```

Supports all transition types.

Done.