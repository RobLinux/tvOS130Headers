/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVControlServices.framework/TVControlServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVControlServices/TVControlServices-Structs.h>
#import <TVControlServices/TVCSEndpoint.h>

@class NSNumber;

@interface TVCSPairedEndpoint : TVCSEndpoint {

	NSNumber* _pairingIdentifier;

}

@property (nonatomic,copy) NSNumber * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)pairingIdentifier;
-(void)setPairingIdentifier:(NSNumber *)arg1 ;
-(BOOL)_isEqualToPairedEndpoint:(id)arg1 ;
-(void)_cloneFromPairedEndpoint:(id)arg1 ;
@end

