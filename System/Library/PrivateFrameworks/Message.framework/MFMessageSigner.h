/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, NSArray, MFError;

@interface MFMessageSigner : NSObject {

	int _status;
	SecTrustRef _trust;
	NSString* _sender;
	NSString* _uncommentedSender;

}

@property (nonatomic,readonly) NSString * sender;                    //@synthesize sender=_sender - In the implementation block
@property (nonatomic,readonly) NSString * commonName; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) int action; 
@property (nonatomic,readonly) NSArray * certificates; 
@property (nonatomic,readonly) MFError * error; 
-(void)dealloc;
-(MFError *)error;
-(NSString *)sender;
-(NSArray *)certificates;
-(int)action;
-(NSString *)emailAddress;
-(id)initWithSender:(id)arg1 trust:(SecTrustRef)arg2 verification:(int)arg3 ;
-(NSString *)commonName;
-(SecTrustRef)copyTrust;
-(void)addTrustException;
-(void)removeTrustException;
-(BOOL)hasTrustException;
@end

