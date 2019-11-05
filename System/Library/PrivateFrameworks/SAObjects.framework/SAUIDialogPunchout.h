/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SAUIButton, SAUIAssistantUtteranceView;

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic,retain) SAUIButton * buttonView; 
@property (nonatomic,retain) SAUIAssistantUtteranceView * utteranceView; 
+(id)dialogPunchout;
+(id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)_af_dialogIdentifier;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIButton *)buttonView;
-(void)setButtonView:(SAUIButton *)arg1 ;
-(SAUIAssistantUtteranceView *)utteranceView;
-(void)setUtteranceView:(SAUIAssistantUtteranceView *)arg1 ;
@end
