/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSCredentialEntryField.h>
#import <VideoSubscriberAccountUI/IKAppKeyboardDelegate.h>

@class IKTextFieldElement, NSString;

@interface VSITMLCredentialEntryField : VSCredentialEntryField <IKAppKeyboardDelegate> {

	IKTextFieldElement* _associatedTextFieldElement;

}

@property (nonatomic,retain) IKTextFieldElement * associatedTextFieldElement;              //@synthesize associatedTextFieldElement=_associatedTextFieldElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(void)setAssociatedTextFieldElement:(IKTextFieldElement *)arg1 ;
-(IKTextFieldElement *)associatedTextFieldElement;
@end

