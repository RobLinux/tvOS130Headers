/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:07 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>
#import <UIKitCore/NSSecureCoding.h>

@class TIDocumentState, TITextInputTraits, UITextInputMode, NSUUID;

@interface _UIInputViewControllerState : NSObject <NSCopying, NSSecureCoding> {

	BOOL _needsInputModeSwitchKey;
	TIDocumentState* _documentState;
	TITextInputTraits* _textInputTraits;
	UITextInputMode* _documentInputMode;
	NSUUID* _documentIdentifier;

}

@property (nonatomic,retain) TIDocumentState * documentState;                  //@synthesize documentState=_documentState - In the implementation block
@property (nonatomic,retain) TITextInputTraits * textInputTraits;              //@synthesize textInputTraits=_textInputTraits - In the implementation block
@property (nonatomic,retain) UITextInputMode * documentInputMode;              //@synthesize documentInputMode=_documentInputMode - In the implementation block
@property (nonatomic,copy) NSUUID * documentIdentifier;                        //@synthesize documentIdentifier=_documentIdentifier - In the implementation block
@property (assign,nonatomic) BOOL needsInputModeSwitchKey;                     //@synthesize needsInputModeSwitchKey=_needsInputModeSwitchKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stateForKeyboardState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)documentIdentifier;
-(void)setDocumentIdentifier:(NSUUID *)arg1 ;
-(TIDocumentState *)documentState;
-(void)setDocumentState:(TIDocumentState *)arg1 ;
-(TITextInputTraits *)textInputTraits;
-(void)setTextInputTraits:(TITextInputTraits *)arg1 ;
-(void)setDocumentInputMode:(UITextInputMode *)arg1 ;
-(UITextInputMode *)documentInputMode;
-(BOOL)needsInputModeSwitchKey;
-(void)createDocumentStateIfNecessary;
-(void)setNeedsInputModeSwitchKey:(BOOL)arg1 ;
@end

