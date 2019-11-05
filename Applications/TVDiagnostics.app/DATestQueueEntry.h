/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 12:58:56 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVDiagnostics.app/TVDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DKDiagnosticAttributes, DKDiagnosticParameters;

@interface DATestQueueEntry : NSObject {

	DKDiagnosticAttributes* _attributes;
	/*^block*/id _completion;
	DKDiagnosticParameters* _parameters;

}

@property (nonatomic,readonly) DKDiagnosticAttributes * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) id completion;                                    //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) DKDiagnosticParameters * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)queueEntryWithAttributes:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)completion;
-(DKDiagnosticAttributes *)attributes;
-(DKDiagnosticParameters *)parameters;
-(id)initWithAttributes:(id)arg1 parameters:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isEqualToTestQueueEntry:(id)arg1 ;
@end

