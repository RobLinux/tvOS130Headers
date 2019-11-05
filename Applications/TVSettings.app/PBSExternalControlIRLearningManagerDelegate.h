/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:59:24 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVSettings.app/TVSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PBSExternalControlIRLearningManagerDelegate <NSObject>
@optional
-(void)irLearningManager:(id)arg1 willStartLearningAction:(int)arg2;
-(void)irLearningManager:(id)arg1 didLearnAction:(int)arg2 withProgress:(double)arg3;
-(void)irLearningManager:(id)arg1 didCompleteLearningAction:(int)arg2 withResult:(BOOL)arg3 error:(id)arg4;
-(void)irLearningManager:(id)arg1 didFinishLearningAction:(int)arg2;
-(void)irLearningManagerDidStartLearning:(id)arg1;
-(void)irLearningManager:(id)arg1 didFailToStartLearningWithError:(id)arg2;
-(void)irLearningManager:(id)arg1 didSaveLearnedActions:(id)arg2 forDeviceWithUUID:(id)arg3;
-(void)irLearningManagerDidCancel:(id)arg1;

@end

