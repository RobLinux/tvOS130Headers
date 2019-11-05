/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCRequest.h>
#import <GeoServices/GEOXPCRequest.h>

@class GEOETATrafficUpdateRequest, GEODataConditionalConnectionProperties, NSString;

@interface GEOETARequestUpdateable : GEOXPCRequest <GEOXPCRequest> {

	GEOETATrafficUpdateRequest* _request;
	GEODataConditionalConnectionProperties* _connectionProperties;

}

@property (nonatomic,retain) GEOETATrafficUpdateRequest * request;                                       //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) GEODataConditionalConnectionProperties * connectionProperties;              //@synthesize connectionProperties=_connectionProperties - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(Class)replyClass;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(GEOETATrafficUpdateRequest *)request;
-(void)setRequest:(GEOETATrafficUpdateRequest *)arg1 ;
-(GEODataConditionalConnectionProperties *)connectionProperties;
-(BOOL)expectsReply;
-(void)setConnectionProperties:(GEODataConditionalConnectionProperties *)arg1 ;
@end

