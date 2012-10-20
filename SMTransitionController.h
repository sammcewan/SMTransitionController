//
//  SMTransitionController.h
//
//  Created by XJones on 11/25/11.
//  Enhanced by Sam McEwan sammcewan@me.com on 21/10/12.
//

#import <UIKit/UIKit.h>

@interface SMTransitionController : UIViewController

@property (nonatomic, strong)   UIView *                containerView;
@property (nonatomic, strong)   UIViewController *      viewController;

- (id)initWithViewController:(UIViewController *)viewController;
- (void)transitionToViewController:(UIViewController *)viewController
                     withOptions:(UIViewAnimationOptions)options;

@end
