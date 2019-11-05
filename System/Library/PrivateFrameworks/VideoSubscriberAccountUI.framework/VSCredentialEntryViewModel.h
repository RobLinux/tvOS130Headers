/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCuratedViewModel.h>

@protocol VSCredentialEntryViewModelDelegate;
@class NSArray, VSCredentialEntryPicker, NSURL, NSString, VSExpressionEvaluator;

@interface VSCredentialEntryViewModel : VSCuratedViewModel {

	NSArray* _credentialEntryFields;
	VSCredentialEntryPicker* _picker;
	NSURL* _linkURL;
	NSString* _linkTitle;
	NSArray* _buttons;
	NSString* _recentsTitle;
	NSString* _recentsMessage;
	NSString* _additionalMessage;
	id<VSCredentialEntryViewModelDelegate> _delegate;
	VSExpressionEvaluator* _buttonExpressionEvaluator;

}

@property (nonatomic,retain) VSExpressionEvaluator * buttonExpressionEvaluator;                   //@synthesize buttonExpressionEvaluator=_buttonExpressionEvaluator - In the implementation block
@property (nonatomic,retain) NSArray * credentialEntryFields;                                     //@synthesize credentialEntryFields=_credentialEntryFields - In the implementation block
@property (nonatomic,retain) VSCredentialEntryPicker * picker;                                    //@synthesize picker=_picker - In the implementation block
@property (nonatomic,copy) NSURL * linkURL;                                                       //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSString * linkTitle;                                                  //@synthesize linkTitle=_linkTitle - In the implementation block
@property (nonatomic,copy) NSArray * buttons;                                                     //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) NSString * recentsTitle;                                               //@synthesize recentsTitle=_recentsTitle - In the implementation block
@property (nonatomic,copy) NSString * recentsMessage;                                             //@synthesize recentsMessage=_recentsMessage - In the implementation block
@property (nonatomic,copy) NSString * additionalMessage;                                          //@synthesize additionalMessage=_additionalMessage - In the implementation block
@property (assign,nonatomic,__weak) id<VSCredentialEntryViewModelDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<VSCredentialEntryViewModelDelegate>)delegate;
-(void)setDelegate:(id<VSCredentialEntryViewModelDelegate>)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(NSURL *)linkURL;
-(void)setLinkURL:(NSURL *)arg1 ;
-(void)setPicker:(VSCredentialEntryPicker *)arg1 ;
-(VSCredentialEntryPicker *)picker;
-(void)buttonTappedAtIndex:(unsigned long long)arg1 ;
-(NSArray *)credentialEntryFields;
-(NSString *)additionalMessage;
-(void)clearFieldsAfterUsername;
-(void)pickerDidSelectRow:(unsigned long long)arg1 ;
-(void)configureWithRequest:(id)arg1 ;
-(void)setCredentialEntryFields:(NSArray *)arg1 ;
-(void)setLinkTitle:(NSString *)arg1 ;
-(void)setAdditionalMessage:(NSString *)arg1 ;
-(void)setButtonExpressionEvaluator:(VSExpressionEvaluator *)arg1 ;
-(VSExpressionEvaluator *)buttonExpressionEvaluator;
-(void)_bindField:(id)arg1 ;
-(void)setRecentsTitle:(NSString *)arg1 ;
-(void)setRecentsMessage:(NSString *)arg1 ;
-(void)_unbindField:(id)arg1 ;
-(NSString *)linkTitle;
-(void)validateCredentialEntryFields;
-(NSString *)recentsTitle;
-(NSString *)recentsMessage;
@end

