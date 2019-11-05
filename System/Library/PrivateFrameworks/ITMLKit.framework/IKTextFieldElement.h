/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:11 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKTextElement.h>

@class IKAppKeyboard;

@interface IKTextFieldElement : IKTextElement {

	IKAppKeyboard* _keyboard;

}

@property (nonatomic,readonly) IKAppKeyboard * keyboard;              //@synthesize keyboard=_keyboard - In the implementation block
+(id)supportedFeatures;
-(BOOL)tv_isSecure;
-(long long)tv_keyboardType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(IKAppKeyboard *)keyboard;
@end

