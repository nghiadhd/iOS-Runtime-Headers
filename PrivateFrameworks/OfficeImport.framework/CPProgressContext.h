/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CPProgressStage, NSDate, NSMutableArray;



@interface CPProgressContext : NSObject 
{
    CPProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (void)setMessage:(id)arg1;
+ (void)setProgress:(double)arg1;
+ (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;
+ (void)removeProgressObserver:(id)arg1;
+ (id)createBranchWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)endBranch:(id)arg1;
+ (void)pushBranch:(id)arg1;
+ (id)contextForCurrentThread;
+ (id)stageForCurrentThread;
+ (double)currentPosition;
+ (void)createContextForCurrentThread;
+ (void)removeContextForCurrentThread;
+ (void)advanceProgress:(double)arg1;
+ (void)popBranch;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;
+ (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 name:(id)arg3;
+ (void)endStage;

- (id)init;
- (void)dealloc;
- (id)currentStage;
- (id)rootStage;
- (void)reportProgress:(double)arg1;

@end