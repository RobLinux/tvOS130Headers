/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:08 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/CrashReporterTVApp.app/CrashReporterTVApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TSInstruction : NSObject {

	NSString* title_;
	NSArray* tokens_;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) NSArray * tokens; 
+(void)flushInstructions;
+(id)instructionWithString:(id)arg1 ;
+(id)instructionsWithString:(id)arg1 ;
+(id)instructionsWithString:(id)arg1 andPath:(id)arg2 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)tokens;
-(id)initWithTokens:(id)arg1 ;
@end

