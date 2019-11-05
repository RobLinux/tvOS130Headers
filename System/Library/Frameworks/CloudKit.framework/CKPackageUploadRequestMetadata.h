/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:44 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKUploadRequestMetadata.h>
#import <CloudKit/NSSecureCoding.h>

@class NSArray;

@interface CKPackageUploadRequestMetadata : CKUploadRequestMetadata <NSSecureCoding> {

	NSArray* _fileSignatures;
	NSArray* _referenceSignatures;

}

@property (nonatomic,readonly) NSArray * referenceSignatures;              //@synthesize referenceSignatures=_referenceSignatures - In the implementation block
@property (nonatomic,readonly) NSArray * fileSignatures;                   //@synthesize fileSignatures=_fileSignatures - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 fileSignatures:(id)arg6 referenceSignatures:(id)arg7 ;
-(id)initWithRepairZoneRecordID:(id)arg1 databaseScope:(long long)arg2 recordID:(id)arg3 recordType:(id)arg4 fieldName:(id)arg5 ;
-(NSArray *)fileSignatures;
-(NSArray *)referenceSignatures;
@end

