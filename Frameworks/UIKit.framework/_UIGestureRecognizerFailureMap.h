/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject {
    char *_failureMap;
    NSMutableArray *_gestureRecognizers;
    int _unmetFailureDependentCount;
    int _unmetFailureRequirementCount;
}

@property(readonly) BOOL hasUnmetFailureRequirementsOrDependents;

+ (void)buildFailureMapForGestureRecognizer:(id)arg1;
+ (void)buildFailureMapForGestureRecognizers:(id)arg1;

- (void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (void)_queueRecognizersForResetIfFinished;
- (void)dealloc;
- (id)description;
- (void)gestureRecognizerBecameDirty:(id)arg1;
- (void)gestureRecognizerDeallocated:(id)arg1;
- (void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2;
- (BOOL)hasUnmetFailureRequirementsOrDependents;
- (id)initWithRelatedGestures:(id)arg1;
- (BOOL)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1;
- (void)rebuildFailureMap;
- (void)reloadFailureMap;

@end
