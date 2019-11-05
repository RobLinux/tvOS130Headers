/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IDS/NSSecureCoding.h>

@class NSDictionary;

@interface IDSLocalPairingRecord : NSObject <NSSecureCoding> {

	NSDictionary* _protectionClassIdentityDataMap;

}

@property (nonatomic,retain) NSDictionary * protectionClassIdentityDataMap;              //@synthesize protectionClassIdentityDataMap=_protectionClassIdentityDataMap - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)protectionClassIdentityDataMap;
-(id)identityDataForDataProtectionClass:(unsigned)arg1 error:(id*)arg2 ;
-(id)initWithIdentityDataClassA:(id)arg1 classC:(id)arg2 classD:(id)arg3 ;
-(void)setProtectionClassIdentityDataMap:(NSDictionary *)arg1 ;
@end

