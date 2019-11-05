/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/NSSecureCoding.h>
#import <BackBoardServices/BSDescriptionProviding.h>

@class NSString;

@interface BKSHIDEventKeyCommand : NSObject <NSSecureCoding, BSDescriptionProviding> {

	NSString* _input;
	long long _keyCode;
	long long _modifierFlags;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;

}

@property (nonatomic,retain) NSString * unmodifiedInput;                   //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;                //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * commandModifiedInput;              //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
@property (nonatomic,readonly) NSString * input;                           //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long keyCode;                          //@synthesize keyCode=_keyCode - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;                    //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) BOOL isTextualKeyCommand; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_keyCodeIsModifierKey:(long long)arg1 ;
+(id)keyCommandWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
+(id)keyCommandWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 ;
+(id)keyCommandForEvent:(IOHIDEventRef)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(BOOL)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
+(id)descriptorWithKeyCode:(long long)arg1 modifierFlags:(long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)input;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)_initWithInput:(id)arg1 keyCode:(long long)arg2 modifierFlags:(long long)arg3 ;
-(id)_sanitizedInputForDescription;
-(BOOL)isTextualKeyCommand;
-(long long)describes:(id)arg1 ;
-(long long)keyCode;
-(long long)modifierFlags;
-(NSString *)unmodifiedInput;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(NSString *)shiftModifiedInput;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(NSString *)commandModifiedInput;
-(void)setCommandModifiedInput:(NSString *)arg1 ;
@end

