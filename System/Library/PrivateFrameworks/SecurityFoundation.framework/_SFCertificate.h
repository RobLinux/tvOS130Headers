/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SecurityFoundation/SecurityFoundation-Structs.h>
@class NSString, NSData;

@interface _SFCertificate : NSObject {

	id _certificateInternal;

}

@property (nonatomic,readonly) SecCertificateRef secCertificate; 
@property (nonatomic,readonly) long long certificateType; 
@property (nonatomic,readonly) NSString * subject; 
@property (nonatomic,readonly) NSString * issuerName; 
@property (nonatomic,readonly) NSData * serialNumber; 
+(BOOL)supportsSecureCoding;
-(NSString *)subject;
-(NSData *)serialNumber;
-(long long)certificateType;
-(NSString *)issuerName;
-(SecCertificateRef)secCertificate;
-(id)initWithSecCertificate:(SecCertificateRef)arg1 ;
@end

