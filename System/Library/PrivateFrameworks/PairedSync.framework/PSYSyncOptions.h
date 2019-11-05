/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:57 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PairedSync/NSSecureCoding.h>

@class PSYTestInput, NSUUID;

@interface PSYSyncOptions : NSObject <NSSecureCoding> {

	BOOL _dryRun;
	BOOL _terminateDuringDryRun;
	PSYTestInput* _testInput;
	NSUUID* _pairingIdentifier;
	NSUUID* _sessionIdentifier;
	unsigned long long _syncSessionType;

}

@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL terminateDuringDryRun;                      //@synthesize terminateDuringDryRun=_terminateDuringDryRun - In the implementation block
@property (nonatomic,retain) PSYTestInput * testInput;                        //@synthesize testInput=_testInput - In the implementation block
@property (nonatomic,retain) NSUUID * pairingIdentifier;                      //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * sessionIdentifier;                      //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long syncSessionType;              //@synthesize syncSessionType=_syncSessionType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)sessionIdentifier;
-(void)setSessionIdentifier:(NSUUID *)arg1 ;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(NSUUID *)pairingIdentifier;
-(void)setPairingIdentifier:(NSUUID *)arg1 ;
-(unsigned long long)syncSessionType;
-(void)setSyncSessionType:(unsigned long long)arg1 ;
-(PSYTestInput *)testInput;
-(BOOL)terminateDuringDryRun;
-(void)setTerminateDuringDryRun:(BOOL)arg1 ;
-(void)setTestInput:(PSYTestInput *)arg1 ;
@end

