/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:11:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSCacheObject.h>

@class NSDictionary, NSString;

@interface SSPlistCacheObject : NSObject <SSCacheObject> {

	NSDictionary* _plist;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cacheObjectTypeIdentifier;
-(void)dealloc;
-(void)setPlist:(id)arg1 ;
-(id)cacheObjectDataRepresentation;
-(id)cacheObjectTypeIdentifier;
-(id)initWithCacheObjectDataRepresentation:(id)arg1 ;
-(id)plist;
@end

