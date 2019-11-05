/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:18 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <GeoServices/GEOXPCRequest.h>

@class GEOImageServiceRequest, NSUUID, NSString;

@interface GEOImageServiceRequestSimple : GEOXPCRequest <GEOXPCRequest> {

	GEOImageServiceRequest* _request;
	NSUUID* _identifier;

}

@property (nonatomic,retain) GEOImageServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(GEOImageServiceRequest *)request;
-(void)setRequest:(GEOImageServiceRequest *)arg1 ;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(BOOL)expectsReply;
@end

