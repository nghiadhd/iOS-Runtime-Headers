/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKSimpleProgressProvider : CLKProgressProvider {
    double  _progress;
}

@property (nonatomic) double progress;

+ (id)simpleProgressProviderWithProgress:(float)arg1;
+ (BOOL)supportsSecureCoding;

- (id)JSONObjectRepresentation;
- (BOOL)_needsUpdates;
- (float)_progressFractionForNow:(id)arg1;
- (void)_validate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (float)progress;
- (void)setProgress:(float)arg1;

@end