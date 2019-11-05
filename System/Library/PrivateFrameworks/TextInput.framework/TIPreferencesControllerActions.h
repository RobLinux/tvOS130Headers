/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:33 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol TIPreferencesControllerActions <NSObject>
@property (nonatomic,copy) NSArray * inputModeSelectionSequence; 
@property (assign,nonatomic) BOOL predictionEnabled; 
@property (assign,nonatomic) BOOL automaticMinimizationEnabled; 
@property (assign,nonatomic) BOOL keyboardShownByTouch; 
@property (assign,nonatomic) CGPoint keyboardPosition; 
@property (assign,nonatomic) CGPoint floatingKeyboardPosition; 
@property (assign,nonatomic) unsigned long long floatingKeyboardDockedEdge; 
@required
-(BOOL)oneTimeActionCompleted:(id)arg1;
-(void)didTriggerOneTimeAction:(id)arg1;
-(void)updateLastUsedInputMode:(id)arg1;
-(void)updateLastUsedLayout:(id)arg1;
-(void)updateLastUsedKeyboards:(id)arg1;
-(void)updateKeyboardIsSplit:(BOOL)arg1 locked:(BOOL)arg2;
-(void)updateKeyboardIsFloating:(BOOL)arg1;
-(void)updateKeyboardHandBias:(id)arg1;
-(void)updateDidPerformFirstReachableKeyboardInteraction;
-(void)updateEnableProKeyboard:(BOOL)arg1;
-(void)updateEnabledDictationLanguages:(id)arg1;
-(void)updateLastUsedDictationLanguages:(id)arg1;
-(NSArray *)inputModeSelectionSequence;
-(void)setInputModeSelectionSequence:(id)arg1;
-(BOOL)predictionEnabled;
-(void)setPredictionEnabled:(BOOL)arg1;
-(BOOL)automaticMinimizationEnabled;
-(void)setAutomaticMinimizationEnabled:(BOOL)arg1;
-(BOOL)keyboardShownByTouch;
-(void)setKeyboardShownByTouch:(BOOL)arg1;
-(CGPoint)keyboardPosition;
-(void)setKeyboardPosition:(CGPoint)arg1;
-(CGPoint)floatingKeyboardPosition;
-(void)setFloatingKeyboardPosition:(CGPoint)arg1;
-(unsigned long long)floatingKeyboardDockedEdge;
-(void)setFloatingKeyboardDockedEdge:(unsigned long long)arg1;

@end

