/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:13 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDailyRoutineShortcutSetupQuestion.h>

@class NSArray, NSString, UIImage, WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion;

@interface WFDailyRoutineShortcutSetupActionsQuestion : WFDailyRoutineShortcutSetupQuestion {

	NSArray* _actions;
	NSString* _addButtonTitle;
	NSString* _skipButtonTitle;
	UIImage* _icon;
	WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion* _followUpQuestion;

}

@property (nonatomic,copy,readonly) NSArray * actions;                                                                   //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSString * addButtonTitle;                                                                    //@synthesize addButtonTitle=_addButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * skipButtonTitle;                                                                   //@synthesize skipButtonTitle=_skipButtonTitle - In the implementation block
@property (nonatomic,retain) UIImage * icon;                                                                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion * followUpQuestion;              //@synthesize followUpQuestion=_followUpQuestion - In the implementation block
-(NSArray *)actions;
-(UIImage *)icon;
-(void)setIcon:(UIImage *)arg1 ;
-(void)setSkipButtonTitle:(NSString *)arg1 ;
-(NSString *)skipButtonTitle;
-(id)initWithPrompt:(id)arg1 subtitle:(id)arg2 actions:(id)arg3 ;
-(NSString *)addButtonTitle;
-(void)setAddButtonTitle:(NSString *)arg1 ;
-(WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *)followUpQuestion;
-(void)setFollowUpQuestion:(WFDailyRoutineShortcutSetupActionParameterFollowUpQuestion *)arg1 ;
@end
