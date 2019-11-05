/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSMutableDictionary, MFFileArchiveEntry, NSURL, NSData, NSError;

@interface MFFileArchiveDirectory : NSObject {

	NSMutableDictionary* _entries;
	NSMutableDictionary* _scrubbedEntries;
	MFFileArchiveEntry* _mainEntry;
	NSURL* _url;
	NSData* _contents;
	NSError* _error;

}

@property (nonatomic,retain) NSURL * url;                           //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSData * contents;                     //@synthesize contents=_contents - In the implementation block
@property (nonatomic,retain,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(NSRange)_rangeOfCentralDirectory:(long long)arg1 ;
+(CentralDirectory*)_centralDirectory:(id)arg1 ;
+(id)_entriesFromCentralDictionary:(CentralDirectory*)arg1 inData:(id)arg2 archiveData:(id)arg3 ;
+(CentralHeader*)_centralHeader:(id)arg1 ;
+(id)archiveDirectory;
+(NSRange)rangeOfCentralDirectoryInData:(id)arg1 ;
+(BOOL)_hasZipSignature:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(NSError *)error;
-(NSURL *)url;
-(NSData *)contents;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setContents:(NSData *)arg1 ;
-(BOOL)inputWithURL:(id)arg1 ;
-(BOOL)inputWithData:(id)arg1 ;
-(void)_scrubContentDirectory;
-(id)archiveEntries;
-(id)mainEntry;
-(void)setMainEntry:(id)arg1 ;
-(id)scrubbedArchiveEntries;
-(BOOL)setArchiveEntry:(id)arg1 ;
@end
