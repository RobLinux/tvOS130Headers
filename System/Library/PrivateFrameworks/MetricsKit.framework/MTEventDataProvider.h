/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventDataProviderDelegate;
@class NSDictionary;

@interface MTEventDataProvider : MTObject {

	id<MTEventDataProviderDelegate> _delegate;
	NSDictionary* _knownFieldMethods;

}

@property (nonatomic,retain) NSDictionary * knownFieldMethods;                             //@synthesize knownFieldMethods=_knownFieldMethods - In the implementation block
@property (assign,nonatomic,__weak) id<MTEventDataProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<MTEventDataProviderDelegate>)delegate;
-(void)setDelegate:(id<MTEventDataProviderDelegate>)arg1 ;
-(id)knownFields;
-(id)knownFieldMethodsForKnownFields:(id)arg1 ;
-(SEL)knownFieldAccessorForFieldName:(id)arg1 ;
-(NSDictionary *)knownFieldMethods;
-(id)processMetricsData:(id)arg1 performanceData:(id)arg2 ;
-(void)setKnownFieldMethods:(NSDictionary *)arg1 ;
@end

