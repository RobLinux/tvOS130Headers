/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, UITextPosition;

@interface _UIPositionedAttributedString : NSObject {

	NSAttributedString* _string;
	UITextPosition* _position;

}

@property (nonatomic,copy,readonly) NSAttributedString * string;              //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) UITextPosition * position;                     //@synthesize position=_position - In the implementation block
+(id)attributedString:(id)arg1 atPosition:(id)arg2 ;
-(id)description;
-(NSAttributedString *)string;
-(UITextPosition *)position;
@end

