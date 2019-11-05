/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/Support/cloudphotod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <cloudphotod/PQLResultSetInitializer.h>

@class NSString;

@interface CPLPrequeliteDownloadResource : NSObject <PQLResultSetInitializer> {

	int _retryCount;
	int _status;
	unsigned long long _position;
	long long _scopeIndex;
	NSString* _itemIdentifier;
	unsigned long long _resourceType;
	NSString* _fingerPrint;
	NSString* _fileUTI;
	unsigned long long _fileSize;
	unsigned long long _taskIdentifier;

}

@property (assign,nonatomic) unsigned long long position;                    //@synthesize position=_position - In the implementation block
@property (assign,nonatomic) long long scopeIndex;                           //@synthesize scopeIndex=_scopeIndex - In the implementation block
@property (nonatomic,copy) NSString * itemIdentifier;                        //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long resourceType;                //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,copy) NSString * fingerPrint;                           //@synthesize fingerPrint=_fingerPrint - In the implementation block
@property (nonatomic,copy) NSString * fileUTI;                               //@synthesize fileUTI=_fileUTI - In the implementation block
@property (assign,nonatomic) unsigned long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (assign,nonatomic) unsigned long long taskIdentifier;              //@synthesize taskIdentifier=_taskIdentifier - In the implementation block
@property (assign,nonatomic) int retryCount;                                 //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)taskIdentifier;
-(void)setTaskIdentifier:(unsigned long long)arg1 ;
-(unsigned long long)fileSize;
-(int)retryCount;
-(void)setRetryCount:(int)arg1 ;
-(NSString *)itemIdentifier;
-(int)status;
-(unsigned long long)position;
-(id)initWithResource:(id)arg1 ;
-(void)setPosition:(unsigned long long)arg1 ;
-(void)setStatus:(int)arg1 ;
-(unsigned long long)resourceType;
-(void)setResourceType:(unsigned long long)arg1 ;
-(void)setFileSize:(unsigned long long)arg1 ;
-(void)setItemIdentifier:(NSString *)arg1 ;
-(long long)scopeIndex;
-(void)setScopeIndex:(long long)arg1 ;
-(NSString *)fingerPrint;
-(void)setFingerPrint:(NSString *)arg1 ;
-(NSString *)fileUTI;
-(void)setFileUTI:(NSString *)arg1 ;
-(id)initFromPQLResultSet:(id)arg1 error:(id*)arg2 ;
-(id)resourceWithDownloadQueue:(id)arg1 ;
@end
