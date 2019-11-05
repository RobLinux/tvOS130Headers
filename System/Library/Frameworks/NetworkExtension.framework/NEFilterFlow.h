/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NSSecureCoding.h>
#import <NetworkExtension/NSCopying.h>

@protocol OS_dispatch_queue;
@class NEFilterAbsoluteVerdict, NSURL, NSData, NSString, NSObject, NSUUID, NSMutableArray;

@interface NEFilterFlow : NSObject <NSSecureCoding, NSCopying> {

	BOOL _isOpen;
	NEFilterAbsoluteVerdict* _currentVerdict;
	BOOL _isRemediationFlow;
	BOOL _isPaused;
	BOOL _reportAtEnd;
	BOOL _sourceAppIdentifierFromApp;
	int _pid;
	int _epid;
	NSURL* _URL;
	NSData* _sourceAppUniqueIdentifier;
	NSString* _sourceAppIdentifier;
	NSString* _sourceAppVersion;
	long long _direction;
	NSData* _sourceAppAuditToken;
	NSObject*<OS_dispatch_queue> _queue;
	NSUUID* _flowUUID;
	NSMutableArray* _savedMessageHandlerQueue;
	unsigned long long _inBytes;
	unsigned long long _outBytes;
	NSData* _crypto_signature;

}

@property (retain) NEFilterAbsoluteVerdict * currentVerdict; 
@property (assign) BOOL isOpen; 
@property (assign) BOOL isRemediationFlow;                                 //@synthesize isRemediationFlow=_isRemediationFlow - In the implementation block
@property (copy) NSString * sourceAppIdentifier;                           //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (copy) NSString * sourceAppVersion;                              //@synthesize sourceAppVersion=_sourceAppVersion - In the implementation block
@property (copy) NSData * sourceAppUniqueIdentifier;                       //@synthesize sourceAppUniqueIdentifier=_sourceAppUniqueIdentifier - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (copy) NSURL * URL;                                              //@synthesize URL=_URL - In the implementation block
@property (copy) NSUUID * flowUUID;                                        //@synthesize flowUUID=_flowUUID - In the implementation block
@property (assign) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (assign) int epid;                                               //@synthesize epid=_epid - In the implementation block
@property (assign) long long direction;                                    //@synthesize direction=_direction - In the implementation block
@property (retain) NSData * sourceAppAuditToken;                           //@synthesize sourceAppAuditToken=_sourceAppAuditToken - In the implementation block
@property (assign) BOOL isPaused;                                          //@synthesize isPaused=_isPaused - In the implementation block
@property (retain) NSMutableArray * savedMessageHandlerQueue;              //@synthesize savedMessageHandlerQueue=_savedMessageHandlerQueue - In the implementation block
@property (assign) BOOL reportAtEnd;                                       //@synthesize reportAtEnd=_reportAtEnd - In the implementation block
@property (assign) BOOL sourceAppIdentifierFromApp;                        //@synthesize sourceAppIdentifierFromApp=_sourceAppIdentifierFromApp - In the implementation block
@property (assign) unsigned long long inBytes;                             //@synthesize inBytes=_inBytes - In the implementation block
@property (assign) unsigned long long outBytes;                            //@synthesize outBytes=_outBytes - In the implementation block
@property (retain) NSData * crypto_signature;                              //@synthesize crypto_signature=_crypto_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)close;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(BOOL)isPaused;
-(BOOL)isOpen;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)setSourceAppIdentifier:(NSString *)arg1 ;
-(NSString *)sourceAppIdentifier;
-(void)setInBytes:(unsigned long long)arg1 ;
-(void)setOutBytes:(unsigned long long)arg1 ;
-(unsigned long long)inBytes;
-(unsigned long long)outBytes;
-(int)epid;
-(long long)direction;
-(void)setDirection:(long long)arg1 ;
-(BOOL)isRemediationFlow;
-(NSMutableArray *)savedMessageHandlerQueue;
-(void)setIsPaused:(BOOL)arg1 ;
-(void)setSavedMessageHandlerQueue:(NSMutableArray *)arg1 ;
-(NEFilterAbsoluteVerdict *)currentVerdict;
-(void)setCurrentVerdict:(NEFilterAbsoluteVerdict *)arg1 ;
-(void)setSourceAppIdentifierFromApp:(BOOL)arg1 ;
-(void)setCrypto_signature:(NSData *)arg1 ;
-(void)setFlowUUID:(NSUUID *)arg1 ;
-(void)setEpid:(int)arg1 ;
-(void)setSourceAppAuditToken:(NSData *)arg1 ;
-(void)copySourceAppInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setIsRemediationFlow:(BOOL)arg1 ;
-(BOOL)reportAtEnd;
-(void)setReportAtEnd:(BOOL)arg1 ;
-(NSUUID *)flowUUID;
-(NSString *)sourceAppVersion;
-(NSData *)sourceAppUniqueIdentifier;
-(NSData *)crypto_signature;
-(BOOL)sourceAppIdentifierFromApp;
-(void)setIsOpen:(BOOL)arg1 ;
-(void)setSourceAppVersion:(NSString *)arg1 ;
-(void)setSourceAppUniqueIdentifier:(NSData *)arg1 ;
-(id)initWithURL:(id)arg1 sourceAppIdentifier:(id)arg2 ;
-(NSData *)sourceAppAuditToken;
@end

