/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 3:11:34 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /usr/libexec/demod
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData, NSString;

@interface MSDFileMetadata : NSObject {

	NSDictionary* _dict;

}

@property (getter=getHash,readonly) NSData * hash; 
@property (getter=getFileAttributes,readonly) NSDictionary * fileAttributes; 
@property (getter=getExtendedAttributes,readonly) NSDictionary * extendedAttributes; 
@property (getter=getAccessControlList,readonly) NSData * accessControlList; 
@property (getter=getFileType,readonly) NSString * fileType; 
@property (getter=getTargetFile,readonly) NSString * targetFile; 
@property (getter=getFileSize,readonly) long long fileSize; 
@property (readonly) NSDictionary * dict;                                                         //@synthesize dict=_dict - In the implementation block
+(id)extendedAttributeKeysWithPath:(id)arg1 ;
+(id)valueForExtendedAttributesKey:(id)arg1 forPath:(id)arg2 ;
+(id)fileAttributesWithPath:(id)arg1 ;
+(id)extendedAttributesWithPath:(id)arg1 ;
+(id)targetFileWithPath:(id)arg1 ;
+(id)accessControlListWithPath:(id)arg1 ;
+(id)fileHashWithPath:(id)arg1 ;
+(id)fileMetadatatWithPath:(id)arg1 ;
+(id)fileMetaDataWithMetadataDictionary:(id)arg1 ;
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSDictionary *)dict;
-(id)getHash;
-(id)getFileType;
-(id)getFileAttributes;
-(id)fileAttributesAllowSet:(id)arg1 ;
-(BOOL)removeAllExtendedAttributes:(id)arg1 ;
-(id)getExtendedAttributes;
-(id)getAccessControlList;
-(id)getTargetFile;
-(BOOL)restoreAttribuesToPath:(id)arg1 ;
-(int)compareWith:(id)arg1 ;
-(long long)getFileSize;
@end

