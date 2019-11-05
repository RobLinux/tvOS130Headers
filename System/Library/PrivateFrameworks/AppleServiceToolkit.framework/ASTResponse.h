/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:05 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSNumber, NSString;

@interface ASTResponse : NSObject {

	long long _command;
	NSDictionary* _data;
	NSNumber* _progress;
	NSNumber* _testId;
	NSDictionary* _stringToCommand;
	NSString* _commandString;

}

@property (nonatomic,retain) NSDictionary * stringToCommand;              //@synthesize stringToCommand=_stringToCommand - In the implementation block
@property (nonatomic,retain) NSString * commandString;                    //@synthesize commandString=_commandString - In the implementation block
@property (nonatomic,readonly) long long command;                         //@synthesize command=_command - In the implementation block
@property (nonatomic,readonly) NSDictionary * data;                       //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) NSNumber * progress;                       //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                         //@synthesize testId=_testId - In the implementation block
+(id)stringFromCommand:(long long)arg1 ;
+(id)responseWithDictionary:(id)arg1 ;
+(id)_stringToCommand;
-(id)description;
-(id)init;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)data;
-(NSNumber *)progress;
-(long long)command;
-(NSNumber *)testId;
-(BOOL)validateResponse:(id)arg1 key:(id)arg2 expectedClass:(Class)arg3 ;
-(id)validateData:(id)arg1 command:(long long)arg2 ;
-(BOOL)validateTestId:(id)arg1 command:(long long)arg2 ;
-(NSString *)commandString;
-(NSDictionary *)stringToCommand;
-(void)setStringToCommand:(NSDictionary *)arg1 ;
-(void)setCommandString:(NSString *)arg1 ;
@end

