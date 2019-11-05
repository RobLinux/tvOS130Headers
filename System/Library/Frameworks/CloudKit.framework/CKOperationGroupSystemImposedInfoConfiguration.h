/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/NSCopying.h>
#import <CloudKit/NSSecureCoding.h>

@interface CKOperationGroupSystemImposedInfoConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isUplink;
	BOOL _allowsCellularAccess;

}

@property (assign,nonatomic) BOOL isUplink;                          //@synthesize isUplink=_isUplink - In the implementation block
@property (assign,nonatomic) BOOL allowsCellularAccess;              //@synthesize allowsCellularAccess=_allowsCellularAccess - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(BOOL)allowsCellularAccess;
-(BOOL)isUplink;
-(void)setIsUplink:(BOOL)arg1 ;
@end
