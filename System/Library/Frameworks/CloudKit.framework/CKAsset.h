/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:42 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKRecordValue.h>
#import <CloudKit/NSSecureCoding.h>

@class NSString, CKRecord, NSURL, CKAssetDownloadPreauthorization, NSData, NSFileHandle, NSNumber, CKAssetCopyInfo, NSDate, CKAssetTransferOptions, CKRecordID, CKAssetRereferenceInfo, CKAssetReference, NSDictionary;

@interface CKAsset : NSObject <CKRecordValue, NSSecureCoding> {

	BOOL _shouldReadAssetContentUsingClientProxy;
	BOOL _wasCached;
	BOOL _hasSize;
	BOOL _uploaded;
	BOOL _downloaded;
	BOOL _shouldReadRawEncryptedData;
	NSString* _downloadURLTemplate;
	CKRecord* _record;
	NSString* _recordKey;
	NSURL* _contentBaseURL;
	NSString* _owner;
	NSString* _requestor;
	NSString* _authToken;
	CKAssetDownloadPreauthorization* _downloadPreauthorization;
	NSString* _downloadBaseURL;
	unsigned long long _downloadTokenExpiration;
	NSData* _boundaryKey;
	NSFileHandle* _clientOpenedFileHandle;
	NSURL* _constructedAssetDownloadURL;
	NSString* _constructedAssetDownloadURLTemplate;
	unsigned long long _constructedAssetEstimatedSize;
	NSURL* _realPathURL;
	NSData* _signature;
	unsigned long long _size;
	unsigned long long _paddedFileSize;
	NSNumber* _deviceID;
	NSNumber* _fileID;
	NSNumber* _generationCountToSave;
	NSURL* _fileURL;
	NSData* _assetContent;
	NSString* _itemTypeHint;
	CKAssetCopyInfo* _assetCopyInfo;
	NSString* _UUID;
	NSDate* _downloadURLExpiration;
	NSData* _assetKey;
	NSData* _wrappedAssetKey;
	NSData* _clearAssetKey;
	NSData* _referenceSignature;
	NSString* _uploadReceipt;
	double _uploadReceiptExpiration;
	long long _storageGroupingPolicy;
	CKAssetTransferOptions* _assetTransferOptions;
	long long _arrayIndex;
	CKRecordID* _recordID;
	CKAssetRereferenceInfo* _assetRereferenceInfo;
	CKAssetReference* _assetReference;
	NSDictionary* _assetChunkerOptions;
	long long _uploadRank;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSString * downloadURLTemplate;                                          //@synthesize downloadURLTemplate=_downloadURLTemplate - In the implementation block
@property (assign,nonatomic,__weak) CKRecord * record;                                                //@synthesize record=_record - In the implementation block
@property (nonatomic,copy) NSString * recordKey;                                                      //@synthesize recordKey=_recordKey - In the implementation block
@property (nonatomic,retain) NSURL * contentBaseURL;                                                  //@synthesize contentBaseURL=_contentBaseURL - In the implementation block
@property (nonatomic,retain) NSString * owner;                                                        //@synthesize owner=_owner - In the implementation block
@property (nonatomic,retain) NSString * requestor;                                                    //@synthesize requestor=_requestor - In the implementation block
@property (nonatomic,copy) NSString * authToken;                                                      //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,retain) CKAssetDownloadPreauthorization * downloadPreauthorization;              //@synthesize downloadPreauthorization=_downloadPreauthorization - In the implementation block
@property (nonatomic,retain) NSString * downloadBaseURL;                                              //@synthesize downloadBaseURL=_downloadBaseURL - In the implementation block
@property (assign,nonatomic) unsigned long long downloadTokenExpiration;                              //@synthesize downloadTokenExpiration=_downloadTokenExpiration - In the implementation block
@property (nonatomic,copy) NSData * boundaryKey;                                                      //@synthesize boundaryKey=_boundaryKey - In the implementation block
@property (nonatomic,retain) NSFileHandle * clientOpenedFileHandle;                                   //@synthesize clientOpenedFileHandle=_clientOpenedFileHandle - In the implementation block
@property (nonatomic,retain) NSURL * constructedAssetDownloadURL;                                     //@synthesize constructedAssetDownloadURL=_constructedAssetDownloadURL - In the implementation block
@property (nonatomic,retain) NSString * constructedAssetDownloadURLTemplate;                          //@synthesize constructedAssetDownloadURLTemplate=_constructedAssetDownloadURLTemplate - In the implementation block
@property (assign,nonatomic) unsigned long long constructedAssetEstimatedSize;                        //@synthesize constructedAssetEstimatedSize=_constructedAssetEstimatedSize - In the implementation block
@property (nonatomic,readonly) BOOL isConstructedAsset; 
@property (nonatomic,copy) NSURL * realPathURL;                                                       //@synthesize realPathURL=_realPathURL - In the implementation block
@property (nonatomic,copy) NSData * signature;                                                        //@synthesize signature=_signature - In the implementation block
@property (assign,nonatomic) unsigned long long size;                                                 //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long paddedFileSize;                                       //@synthesize paddedFileSize=_paddedFileSize - In the implementation block
@property (nonatomic,readonly) NSNumber * deviceID;                                                   //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSNumber * fileID;                                                     //@synthesize fileID=_fileID - In the implementation block
@property (nonatomic,retain) NSNumber * generationCountToSave;                                        //@synthesize generationCountToSave=_generationCountToSave - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                           //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSURL * nullableFileURL; 
@property (nonatomic,copy) NSData * assetContent;                                                     //@synthesize assetContent=_assetContent - In the implementation block
@property (nonatomic,retain) NSString * itemTypeHint;                                                 //@synthesize itemTypeHint=_itemTypeHint - In the implementation block
@property (nonatomic,readonly) BOOL shouldReadAssetContentUsingClientProxy;                           //@synthesize shouldReadAssetContentUsingClientProxy=_shouldReadAssetContentUsingClientProxy - In the implementation block
@property (nonatomic,retain) CKAssetCopyInfo * assetCopyInfo;                                         //@synthesize assetCopyInfo=_assetCopyInfo - In the implementation block
@property (nonatomic,readonly) NSString * assetHandleUUID; 
@property (nonatomic,retain) NSString * UUID;                                                         //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) NSURL * downloadURL; 
@property (nonatomic,retain) NSDate * downloadURLExpiration;                                          //@synthesize downloadURLExpiration=_downloadURLExpiration - In the implementation block
@property (nonatomic,retain) NSData * assetKey;                                                       //@synthesize assetKey=_assetKey - In the implementation block
@property (nonatomic,retain) NSData * wrappedAssetKey;                                                //@synthesize wrappedAssetKey=_wrappedAssetKey - In the implementation block
@property (nonatomic,retain) NSData * clearAssetKey;                                                  //@synthesize clearAssetKey=_clearAssetKey - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;                                             //@synthesize referenceSignature=_referenceSignature - In the implementation block
@property (nonatomic,copy) NSString * uploadReceipt;                                                  //@synthesize uploadReceipt=_uploadReceipt - In the implementation block
@property (assign,nonatomic) double uploadReceiptExpiration;                                          //@synthesize uploadReceiptExpiration=_uploadReceiptExpiration - In the implementation block
@property (assign,nonatomic) long long storageGroupingPolicy;                                         //@synthesize storageGroupingPolicy=_storageGroupingPolicy - In the implementation block
@property (assign,nonatomic) BOOL wasCached;                                                          //@synthesize wasCached=_wasCached - In the implementation block
@property (assign,nonatomic) BOOL hasSize;                                                            //@synthesize hasSize=_hasSize - In the implementation block
@property (assign,nonatomic) BOOL uploaded;                                                           //@synthesize uploaded=_uploaded - In the implementation block
@property (assign,nonatomic) BOOL downloaded;                                                         //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,nonatomic) BOOL shouldReadRawEncryptedData;                                         //@synthesize shouldReadRawEncryptedData=_shouldReadRawEncryptedData - In the implementation block
@property (nonatomic,retain) CKAssetTransferOptions * assetTransferOptions;                           //@synthesize assetTransferOptions=_assetTransferOptions - In the implementation block
@property (assign,nonatomic) long long arrayIndex;                                                    //@synthesize arrayIndex=_arrayIndex - In the implementation block
@property (nonatomic,retain) CKRecordID * recordID;                                                   //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,readonly) BOOL isRereferencedAssetUpload; 
@property (nonatomic,retain) CKAssetRereferenceInfo * assetRereferenceInfo;                           //@synthesize assetRereferenceInfo=_assetRereferenceInfo - In the implementation block
@property (nonatomic,retain) CKAssetReference * assetReference;                                       //@synthesize assetReference=_assetReference - In the implementation block
@property (nonatomic,retain) NSDictionary * assetChunkerOptions;                                      //@synthesize assetChunkerOptions=_assetChunkerOptions - In the implementation block
@property (assign,nonatomic) long long uploadRank;                                                    //@synthesize uploadRank=_uploadRank - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)openWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileMetadataWithFileHandle:(id)arg1 openInfo:(id)arg2 error:(id*)arg3 ;
+(int)errorCodeFromPOSIXCode:(int)arg1 ;
+(id)openToReadRawEncryptedDataWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)_openUnencryptedWithOpenInfo:(id)arg1 genCountCheck:(BOOL)arg2 error:(id*)arg3 ;
+(id)_expandTemplateURL:(id)arg1 fieldValues:(id)arg2 ;
+(id)assetWithFileURL:(id)arg1 ;
+(id)getFileSizeWithOpenInfo:(id)arg1 error:(id*)arg2 ;
+(id)getFileMetadataAtPath:(id)arg1 error:(id*)arg2 ;
+(id)_canonicalizeTemplateURL:(id)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)size;
-(void)setOwner:(NSString *)arg1 ;
-(NSURL *)fileURL;
-(NSString *)UUID;
-(void)setUUID:(NSString *)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 ;
-(id)openWithError:(id*)arg1 ;
-(NSData *)signature;
-(void)setSize:(unsigned long long)arg1 ;
-(CKRecordID *)recordID;
-(id)initWithFileURL:(id)arg1 ;
-(NSNumber *)deviceID;
-(NSString *)requestor;
-(void)setSignature:(NSData *)arg1 ;
-(NSString *)authToken;
-(void)setAuthToken:(NSString *)arg1 ;
-(void)setHasSize:(BOOL)arg1 ;
-(BOOL)hasSize;
-(void)setUploaded:(BOOL)arg1 ;
-(void)setRecordID:(CKRecordID *)arg1 ;
-(CKRecord *)record;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(BOOL)shouldReadRawEncryptedData;
-(BOOL)shouldReadAssetContentUsingClientProxy;
-(NSData *)assetContent;
-(void)setRecord:(CKRecord *)arg1 ;
-(BOOL)wasCached;
-(void)setWasCached:(BOOL)arg1 ;
-(NSNumber *)fileID;
-(void)setShouldReadRawEncryptedData:(BOOL)arg1 ;
-(NSFileHandle *)clientOpenedFileHandle;
-(void)setClientOpenedFileHandle:(NSFileHandle *)arg1 ;
-(NSData *)referenceSignature;
-(NSData *)assetKey;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(void)setAssetKey:(NSData *)arg1 ;
-(NSURL *)contentBaseURL;
-(NSString *)owner;
-(unsigned long long)downloadTokenExpiration;
-(void)setDownloadTokenExpiration:(unsigned long long)arg1 ;
-(NSData *)clearAssetKey;
-(void)setContentBaseURL:(NSURL *)arg1 ;
-(void)setRequestor:(NSString *)arg1 ;
-(id)_initBare;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 ;
-(NSString *)constructedAssetDownloadURLTemplate;
-(long long)arrayIndex;
-(BOOL)isConstructedAsset;
-(unsigned long long)constructedAssetEstimatedSize;
-(NSString *)recordKey;
-(NSNumber *)generationCountToSave;
-(long long)uploadRank;
-(NSString *)uploadReceipt;
-(double)uploadReceiptExpiration;
-(NSData *)wrappedAssetKey;
-(CKAssetCopyInfo *)assetCopyInfo;
-(CKAssetDownloadPreauthorization *)downloadPreauthorization;
-(BOOL)uploaded;
-(BOOL)downloaded;
-(NSString *)downloadURLTemplate;
-(NSDate *)downloadURLExpiration;
-(long long)storageGroupingPolicy;
-(id)downloadURLWithFileName:(id)arg1 ;
-(NSURL *)realPathURL;
-(id)initWithFileURL:(id)arg1 signature:(id)arg2 assetHandleUUID:(id)arg3 ;
-(id)initWithAssetReference:(id)arg1 ;
-(id)initWithDeviceID:(id)arg1 fileID:(id)arg2 generationID:(id)arg3 ;
-(id)initWithCopyInfo:(id)arg1 fileURL:(id)arg2 ;
-(id)initWithAssetContent:(id)arg1 itemTypeHint:(id)arg2 ;
-(NSString *)assetHandleUUID;
-(BOOL)isRereferencedAssetUpload;
-(NSURL *)downloadURL;
-(NSURL *)nullableFileURL;
-(void)setNullableFileURL:(NSURL *)arg1 ;
-(void)setDownloadURLTemplate:(NSString *)arg1 ;
-(void)setRecordKey:(NSString *)arg1 ;
-(void)setDownloadPreauthorization:(CKAssetDownloadPreauthorization *)arg1 ;
-(NSString *)downloadBaseURL;
-(void)setDownloadBaseURL:(NSString *)arg1 ;
-(NSData *)boundaryKey;
-(void)setBoundaryKey:(NSData *)arg1 ;
-(NSURL *)constructedAssetDownloadURL;
-(void)setConstructedAssetDownloadURL:(NSURL *)arg1 ;
-(void)setConstructedAssetDownloadURLTemplate:(NSString *)arg1 ;
-(void)setConstructedAssetEstimatedSize:(unsigned long long)arg1 ;
-(void)setRealPathURL:(NSURL *)arg1 ;
-(unsigned long long)paddedFileSize;
-(void)setPaddedFileSize:(unsigned long long)arg1 ;
-(void)setGenerationCountToSave:(NSNumber *)arg1 ;
-(void)setAssetContent:(NSData *)arg1 ;
-(NSString *)itemTypeHint;
-(void)setItemTypeHint:(NSString *)arg1 ;
-(void)setAssetCopyInfo:(CKAssetCopyInfo *)arg1 ;
-(void)setDownloadURLExpiration:(NSDate *)arg1 ;
-(void)setWrappedAssetKey:(NSData *)arg1 ;
-(void)setClearAssetKey:(NSData *)arg1 ;
-(void)setUploadReceipt:(NSString *)arg1 ;
-(void)setUploadReceiptExpiration:(double)arg1 ;
-(void)setStorageGroupingPolicy:(long long)arg1 ;
-(void)setDownloaded:(BOOL)arg1 ;
-(CKAssetTransferOptions *)assetTransferOptions;
-(void)setAssetTransferOptions:(CKAssetTransferOptions *)arg1 ;
-(void)setArrayIndex:(long long)arg1 ;
-(CKAssetRereferenceInfo *)assetRereferenceInfo;
-(void)setAssetRereferenceInfo:(CKAssetRereferenceInfo *)arg1 ;
-(CKAssetReference *)assetReference;
-(void)setAssetReference:(CKAssetReference *)arg1 ;
-(NSDictionary *)assetChunkerOptions;
-(void)setAssetChunkerOptions:(NSDictionary *)arg1 ;
-(void)setUploadRank:(long long)arg1 ;
@end

