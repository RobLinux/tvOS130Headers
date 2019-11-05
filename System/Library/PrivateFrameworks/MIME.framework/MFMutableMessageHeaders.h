/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:17 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFMessageHeaders.h>

@class NSMutableDictionary, NSMutableArray;

@interface MFMutableMessageHeaders : MFMessageHeaders {

	NSMutableDictionary* _headersAdded;
	NSMutableArray* _headersRemoved;

}
-(id)description;
-(void)dealloc;
-(id)mutableCopy;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)allHeaderKeys;
-(id)headersDictionary;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(void)setHeader:(id)arg1 forKey:(id)arg2 ;
-(void)_appendHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)_appendAddedHeaderKey:(id)arg1 value:(id)arg2 toData:(id)arg3 ;
-(void)removeHeaderForKey:(id)arg1 ;
-(void)setAddressList:(id)arg1 forKey:(id)arg2 ;
-(void)mergeHeaders:(id)arg1 ;
-(void)setAddressListForSender:(id)arg1 ;
-(void)setAddressListForTo:(id)arg1 ;
-(void)setAddressListForCc:(id)arg1 ;
-(void)setAddressListForBcc:(id)arg1 ;
-(void)setReferences:(id)arg1 ;
-(void)stripInternalHeaders;
@end

