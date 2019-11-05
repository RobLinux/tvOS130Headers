/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCNShadable;
@class NSString;

@interface _SCNShadableCompilationIssue : NSObject {

	id<SCNShadable> _shadable;
	NSString* _entryPoint;
	NSString* _effectiveModifier;
	NSString* _message;
	unsigned long long _type;
	long long _line;

}

@property (nonatomic,readonly) id<SCNShadable> shadable;                  //@synthesize shadable=_shadable - In the implementation block
@property (nonatomic,readonly) NSString * entryPoint;                     //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,readonly) NSString * effectiveModifier;              //@synthesize effectiveModifier=_effectiveModifier - In the implementation block
@property (nonatomic,readonly) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long line;                            //@synthesize line=_line - In the implementation block
+(id)issueWithShadable:(id)arg1 entryPoint:(id)arg2 effectiveModifier:(id)arg3 message:(id)arg4 line:(long long)arg5 type:(unsigned long long)arg6 ;
-(void)dealloc;
-(unsigned long long)type;
-(long long)line;
-(NSString *)message;
-(NSString *)entryPoint;
-(id<SCNShadable>)shadable;
-(NSString *)effectiveModifier;
@end

