/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSecureCoding.h>

@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSSecureCoding> {

	unsigned long long _messageCode;
	NSData* _messageBody;
	NSString* _token;
	NSString* _contextName;
	NSString* _contextTransactionAuthor;
	NSString* _processName;

}

@property (assign) unsigned long long messageCode;                             //@synthesize messageCode=_messageCode - In the implementation block
@property (nonatomic,retain) NSData * messageBody;                             //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * token;                                 //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * contextName;                           //@synthesize contextName=_contextName - In the implementation block
@property (nonatomic,retain) NSString * contextTransactionAuthor;              //@synthesize contextTransactionAuthor=_contextTransactionAuthor - In the implementation block
@property (nonatomic,retain) NSString * processName;                           //@synthesize processName=_processName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(NSString *)token;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(void)setToken:(NSString *)arg1 ;
-(void)setContextName:(NSString *)arg1 ;
-(void)setContextTransactionAuthor:(NSString *)arg1 ;
-(unsigned long long)messageCode;
-(NSData *)messageBody;
-(void)setMessageCode:(unsigned long long)arg1 ;
-(void)setMessageBody:(NSData *)arg1 ;
-(NSString *)contextName;
-(NSString *)contextTransactionAuthor;
@end

