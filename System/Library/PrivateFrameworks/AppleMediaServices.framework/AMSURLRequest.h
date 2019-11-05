/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AppleMediaServices-Structs.h>
#import <CFNetwork/NSMutableURLRequest.h>
#import <AppleMediaServices/NSCopying.h>
#import <AppleMediaServices/NSMutableCopying.h>

@class AMSURLRequestProperties;

@interface AMSURLRequest : NSMutableURLRequest <NSCopying, NSMutableCopying> {

	AMSURLRequestProperties* _properties;

}

@property (nonatomic,retain) AMSURLRequestProperties * properties;              //@synthesize properties=_properties - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(AMSURLRequestProperties *)properties;
-(void)setProperties:(AMSURLRequestProperties *)arg1 ;
-(id)initWithRequest:(id)arg1 ;
@end

