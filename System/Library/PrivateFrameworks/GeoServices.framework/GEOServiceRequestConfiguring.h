/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(double)timeout;
-(unsigned long long)multipathServiceType;

@required
-(unsigned long long)urlType;
-(SCD_Struct_GE5*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;
-(unsigned char)requestCounterInfoTypeForRequest:(id)arg1;

@end

