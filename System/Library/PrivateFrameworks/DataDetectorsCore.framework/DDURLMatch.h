/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:29 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
@class NSString;

@interface DDURLMatch : NSObject {

	NSRange _range;
	NSString* _url;

}
-(id)description;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
-(id)url;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 url:(id)arg2 ;
@end
