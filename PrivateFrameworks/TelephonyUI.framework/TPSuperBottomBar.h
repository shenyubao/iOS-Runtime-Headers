/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@class <TPSuperBottomBarDelegateProtocol>, NSArray, NSMutableArray, TPButton, TPSlidingButton;

@interface TPSuperBottomBar : UIView <TPSlidingButtonDelegateProtocol> {
    BOOL _blursBackground;
    float _bottomMargin;
    NSArray *_buttonLayoutConstraints;
    int _currentState;
    BOOL _declineAndMessageIsAvailable;
    BOOL _declineAndRemindIsAvailable;
    <TPSuperBottomBarDelegateProtocol> *_delegate;
    BOOL _enabled;
    NSMutableArray *_hijackedGestureRecognizers;
    NSArray *_horizontalConstraintsForSupplementalButtons;
    TPButton *_mainLeftButton;
    TPButton *_mainRightButton;
    TPButton *_sideButtonLeft;
    TPButton *_sideButtonRight;
    TPSlidingButton *_slidingButton;
    NSMutableArray *_stateStack;
    TPButton *_supplementalTopLeftButton;
    TPButton *_supplementalTopRightButton;
}

@property BOOL blursBackground;
@property float bottomMargin;
@property(retain) NSArray * buttonLayoutConstraints;
@property int currentState;
@property BOOL declineAndMessageIsAvailable;
@property BOOL declineAndRemindIsAvailable;
@property <TPSuperBottomBarDelegateProtocol> * delegate;
@property(readonly) struct CGSize { float x1; float x2; } effectiveSize;
@property BOOL enabled;
@property(retain) NSMutableArray * hijackedGestureRecognizers;
@property(retain) NSArray * horizontalConstraintsForSupplementalButtons;
@property(retain) TPButton * mainLeftButton;
@property(retain) TPButton * mainRightButton;
@property(retain) TPButton * sideButtonLeft;
@property(retain) TPButton * sideButtonRight;
@property(retain) TPSlidingButton * slidingButton;
@property(retain) NSMutableArray * stateStack;
@property(retain) TPButton * supplementalTopLeftButton;
@property(retain) TPButton * supplementalTopRightButton;

+ (float)defaultBottomMargin;
+ (float)defaultInterButtonSpacing;
+ (float)defaultSideMarginForDoubleButton;
+ (float)defaultSideMarginForSingleButton;
+ (float)defaultWidth;

- (void)_clearHijackedGestureRecognizers;
- (id)_horizontalConstraintsForSupplementalButtonsUsingLabels:(id)arg1;
- (void)_updateHorizontalConstraintsForSupplementalButtons;
- (void)addSubview:(id)arg1;
- (void)animateFromIncomingCallStateToFaceTimeInCallStateWithCompletion:(id)arg1;
- (void)animateFromIncomingCallStateToInCallStateWithCompletion:(id)arg1;
- (BOOL)animateFromState:(int)arg1 toState:(int)arg2 completion:(id)arg3;
- (void)animateOutLeftAndRightMainButtonsAndAddNewMainButton:(id)arg1 completion:(id)arg2;
- (void)animateOutMainButtonAndAddNewLeftButton:(id)arg1 newRightButton:(id)arg2 completion:(id)arg3;
- (void)animateOutRightMainButtonWithCompletion:(id)arg1;
- (BOOL)blursBackground;
- (float)bottomMargin;
- (id)buttonLayoutConstraints;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonPressed:(id)arg1;
- (id)constraintsForState:(int)arg1;
- (id)controlForActionType:(int)arg1;
- (int)currentState;
- (id)customTitleStringForActionType:(int)arg1 givenDefaultTitle:(id)arg2;
- (void)dealloc;
- (BOOL)declineAndMessageIsAvailable;
- (BOOL)declineAndRemindIsAvailable;
- (id)delegate;
- (struct CGSize { float x1; float x2; })effectiveSize;
- (BOOL)enabled;
- (id)hijackedGestureRecognizers;
- (id)horizontalConstraintsForSupplementalButtons;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (id)mainLeftButton;
- (id)mainRightButton;
- (id)makeButtonWithType:(int)arg1 title:(id)arg2 image:(id)arg3 color:(int)arg4 font:(id)arg5 fontColor:(id)arg6;
- (id)makeSlidingButtonWithType:(int)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (BOOL)popStateAnimated:(BOOL)arg1 animationCompletionBlock:(id)arg2;
- (void)prepareButtonsForAnimationBegin;
- (void)prepareButtonsForAnimationEnd;
- (void)pushState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(id)arg3;
- (void)refreshCustomizedActionTypeTitleForButton:(id)arg1;
- (void)refreshCustomizedActionTypeTitles;
- (void)removeAllButtons;
- (void)resetPoppedStates;
- (void)setAction:(int)arg1 enabled:(BOOL)arg2;
- (void)setAction:(int)arg1 selected:(BOOL)arg2;
- (void)setBlursBackground:(BOOL)arg1;
- (void)setBottomMargin:(float)arg1;
- (void)setButtonLayoutConstraints:(id)arg1;
- (void)setCurrentState:(int)arg1 animated:(BOOL)arg2 animationCompletionBlock:(id)arg3;
- (void)setCurrentState:(int)arg1;
- (void)setDeclineAndMessageIsAvailable:(BOOL)arg1;
- (void)setDeclineAndRemindIsAvailable:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHijackedGestureRecognizers:(id)arg1;
- (void)setHorizontalConstraintsForSupplementalButtons:(id)arg1;
- (void)setMainLeftButton:(id)arg1;
- (void)setMainRightButton:(id)arg1;
- (void)setSideButtonLeft:(id)arg1;
- (void)setSideButtonRight:(id)arg1;
- (void)setSlidingButton:(id)arg1;
- (void)setStateStack:(id)arg1;
- (void)setSupplementalTopLeftButton:(id)arg1;
- (void)setSupplementalTopRightButton:(id)arg1;
- (id)sideButtonLeft;
- (id)sideButtonRight;
- (void)slidingButton:(id)arg1 didSlideToProportion:(float)arg2;
- (id)slidingButton;
- (id)stateStack;
- (id)supplementalTopLeftButton;
- (id)supplementalTopRightButton;
- (id)viewLabels;

@end