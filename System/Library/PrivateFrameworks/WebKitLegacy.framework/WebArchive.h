/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebKitLegacy/NSCoding.h>
#import <WebKitLegacy/NSCopying.h>

@class WebArchivePrivate, WebResource, NSArray, NSData;

@interface WebArchive : NSObject <NSCoding, NSCopying> {

	WebArchivePrivate* _private;

}

@property (nonatomic,readonly) WebResource * mainResource; 
@property (nonatomic,copy,readonly) NSArray * subresources; 
@property (nonatomic,copy,readonly) NSArray * subframeArchives; 
@property (nonatomic,copy,readonly) NSData * data; 
+(id)bundleForClass;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3 ;
-(WebResource *)mainResource;
-(NSArray *)subresources;
-(NSArray *)subframeArchives;
-(id)_initWithCoreLegacyWebArchive:(RefPtr<WebCore::LegacyWebArchive, WTF::DumbPtrTraits<WebCore::LegacyWebArchive> >*)arg1 ;
-(LegacyWebArchive*)_coreLegacyWebArchive;
@end

