/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:49:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CoreServices.framework/CoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreServices/CoreServices-Structs.h>
#import <CoreServices/NSSecureCoding.h>
#import <CoreServices/NSCopying.h>

@interface _LSQuery : NSObject <NSSecureCoding, NSCopying> {

	BOOL _legacy;

}

@property (assign,getter=isLegacy,nonatomic) BOOL legacy;              //@synthesize legacy=_legacy - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(void)setLegacy:(BOOL)arg1 ;
-(BOOL)isLegacy;
-(BOOL)_canResolveLocallyWithoutMappingDatabase;
-(void)_enumerateWithXPCConnection:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)_requiresDatabaseMappingEntitlement;
@end

