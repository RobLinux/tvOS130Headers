/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSMemoryEntity.h>

@class NSData, NSString, NSDictionary, NSArray;

@interface FinishDownloadAssetMemoryEntity : SSMemoryEntity {

	NSData* _receiptData;

}

@property (nonatomic,readonly) NSString * destinationFileName; 
@property (nonatomic,readonly) NSDictionary * fileAttributes; 
@property (nonatomic,readonly) NSString * assetType; 
@property (nonatomic,readonly) NSString * destinationURLString; 
@property (nonatomic,readonly) NSData * DPInfoData; 
@property (getter=isExternalAsset,nonatomic,readonly) BOOL externalAsset; 
@property (nonatomic,readonly) NSString * fileProtectionType; 
@property (nonatomic,readonly) NSString * localPath; 
@property (nonatomic,readonly) NSString * pathExtension; 
@property (nonatomic,readonly) NSData * receiptData;                                   //@synthesize receiptData=_receiptData - In the implementation block
@property (nonatomic,readonly) NSData * SINFData; 
@property (nonatomic,readonly) NSString * sourceURLString; 
@property (nonatomic,readonly) NSString * variantIdentifier; 
@property (nonatomic,readonly) NSArray * SINFs; 
+(id)defaultProperties;
+(Class)databaseEntityClass;
-(NSString *)pathExtension;
-(NSDictionary *)fileAttributes;
-(NSString *)fileProtectionType;
-(NSString *)assetType;
-(NSString *)variantIdentifier;
-(NSString *)destinationURLString;
-(NSString *)localPath;
-(NSString *)destinationFileName;
-(NSString *)sourceURLString;
-(BOOL)isExternalAsset;
-(NSData *)receiptData;
-(NSData *)SINFData;
-(NSData *)DPInfoData;
-(NSArray *)SINFs;
@end

